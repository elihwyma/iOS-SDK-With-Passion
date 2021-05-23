/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLRange : NSObject

{
    struct _NSRange _range;
}

@property (nonatomic, readonly) unsigned long long location;
@property (nonatomic, readonly) unsigned long long length;

+ (void)initializeJSContext:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)NSRangeValue;

@end
