/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject

{
    NSString *_address;
}

@property (readonly) NSString *address;

+ (id)emailAddress:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1;
- (id)encodedString;
- (id)canonicalFormat;

@end
