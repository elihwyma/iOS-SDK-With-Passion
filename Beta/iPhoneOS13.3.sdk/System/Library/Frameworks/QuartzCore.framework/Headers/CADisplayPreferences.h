/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CADisplayPreferences : NSObject

{
    struct CADisplayPreferencesPriv *_priv;
}

@property (nonatomic) _Bool matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;
@property (nonatomic, readonly) int _preferredHdrType;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatchContent:(_Bool)arg1 preferredHdrType:(int)arg2;
- (id)initWithPreferences:(id)arg1;

@end
