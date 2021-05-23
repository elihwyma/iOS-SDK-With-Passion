/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WBSRecentlyUsedAutoFillSet : NSObject

{
    NSArray *_fillMatches;
    NSArray *_skipMatches;
    NSString *_label;
}

@property (copy, nonatomic, readonly) NSArray *fillMatches;
@property (copy, nonatomic, readonly) NSArray *skipMatches;
@property (copy, nonatomic, readonly) NSString *label;

- (id)initWithFillMatches:(id)arg1 skipMatches:(id)arg2 label:(id)arg3;

@end
