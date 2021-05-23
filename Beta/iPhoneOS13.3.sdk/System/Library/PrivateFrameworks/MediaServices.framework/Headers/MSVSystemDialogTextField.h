/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSVSystemDialogTextField : NSObject

{
    _Bool _secure;
    NSString *_title;
    long long _keyboardType;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isSecure) _Bool secure;
@property (nonatomic) long long keyboardType;

+ (id)textFieldWithTitle:(id)arg1;
+ (id)textFieldWithTitle:(id)arg1 secure:(_Bool)arg2;

- (id)initWithTitle:(id)arg1;

@end
