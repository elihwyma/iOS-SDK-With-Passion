/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSSetChange : NSObject

@property (readonly) unsigned long long changeType;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;

@end
