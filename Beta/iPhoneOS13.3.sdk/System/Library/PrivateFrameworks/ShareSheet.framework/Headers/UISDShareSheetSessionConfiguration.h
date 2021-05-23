/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface UISDShareSheetSessionConfiguration : NSObject

{
    _Bool _wantsAnimation;
    NSNumber *_nearbyCountSlotID;
    NSArray *_peopleProxies;
    NSArray *_shareProxies;
    NSArray *_actionProxies;
}

@property (retain, nonatomic) NSNumber *nearbyCountSlotID;
@property (retain, nonatomic) NSArray *peopleProxies;
@property (retain, nonatomic) NSArray *shareProxies;
@property (retain, nonatomic) NSArray *actionProxies;
@property (nonatomic) _Bool wantsAnimation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
