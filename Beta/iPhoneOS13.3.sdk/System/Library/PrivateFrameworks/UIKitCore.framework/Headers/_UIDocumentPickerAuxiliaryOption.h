/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <Swift>

{
    _Bool _newlyAdded;
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;
    CDUnknownBlockType _handler;
    unsigned long long _order;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) unsigned long long order;
@property (nonatomic, getter=isNewlyAdded) _Bool newlyAdded;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
