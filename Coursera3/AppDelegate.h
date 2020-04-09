//
//  AppDelegate.h
//  Coursera3
//
//  Created by Tushar Elangovan on 4/9/20.
//  Copyright © 2020 Tushar Elangovan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

