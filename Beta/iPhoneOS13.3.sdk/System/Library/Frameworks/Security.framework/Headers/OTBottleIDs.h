/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface OTBottleIDs : NSObject

{
    NSArray *_preferredBottleIDs;
    NSArray *_partialRecoveryBottleIDs;
}

@property (retain) NSArray *preferredBottleIDs;
@property (retain) NSArray *partialRecoveryBottleIDs;

@end
