/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIFont;

@interface CKPhoneNumberCompressor : NSObject

{
    NSString *_phoneNumber;
    UIFont *_font;
    double _desiredWidth;
    NSArray *_preferredCompressions;
}

@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double desiredWidth;
@property (copy, nonatomic) NSArray *preferredCompressions;

- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1;
- (id)compress;

@end
