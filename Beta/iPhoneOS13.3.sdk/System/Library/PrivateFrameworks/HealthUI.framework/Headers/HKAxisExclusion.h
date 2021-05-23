/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface HKAxisExclusion : NSObject

{
    NSMutableArray *_excludedRects;
}

@property (retain, nonatomic) NSMutableArray *excludedRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)excludeRect:(struct CGRect)arg1;

@end
