//
//  ToDoItem.h
//  ToDoList
//
//  Created by Romain Monclus on 08/07/2014.
//  Copyright (c) 2014 Romain Monclus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
