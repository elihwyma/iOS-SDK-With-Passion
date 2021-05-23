/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject

{
    NSString *_topLevelKey;
    NSString *_secondLevelKey;
}

@property (nonatomic, readonly) NSString *topLevelPropertyKey;
@property (nonatomic, readonly) NSString *secondLevelPropertyKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *keyPathString;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2;

@end
