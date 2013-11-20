//
//  LoadedData.h
//  ExtraCredits
//
//  Created by Purkhiser,Evan on 11/18/13.
//  Copyright (c) 2013 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface LoadedData : NSManagedObject

@property (nonatomic, retain) NSNumber * version;
@property (nonatomic, retain) NSDate * updatedOn;

@end