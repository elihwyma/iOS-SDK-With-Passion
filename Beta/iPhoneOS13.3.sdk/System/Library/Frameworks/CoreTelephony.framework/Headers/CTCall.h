/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTCall : NSObject

{
    NSString *_callState;
    NSString *_callID;
}

@property (copy, nonatomic) NSString *callState;
@property (copy, nonatomic) NSString *callID;

+ (id)callForCXCall:(id)arg1;
+ (id)callForCTCallRef:(struct __CTCall *)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
