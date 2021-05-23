/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject

{
    NSNumber *_updateSequenceNum;
    NSArray *_matchingShares;
}

@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSArray *matchingShares;

+ (id)structName;
+ (id)structFields;

@end
