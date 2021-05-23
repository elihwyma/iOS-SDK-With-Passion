/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@interface NUErrorMessage : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;

@end
