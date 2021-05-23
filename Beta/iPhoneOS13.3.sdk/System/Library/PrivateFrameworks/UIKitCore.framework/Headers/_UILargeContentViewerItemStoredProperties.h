/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@interface _UILargeContentViewerItemStoredProperties : NSObject <Swift>

{
    _Bool _didSetShowsLargeContentViewer;
    _Bool _showsLargeContentViewer;
    _Bool _didSetLargeContentTitle;
    _Bool _didSetLargeContentImage;
    _Bool _didSetScalesLargeContentImage;
    _Bool _scalesLargeContentImage;
    _Bool _didSetLargeContentImageInsets;
    NSString *_largeContentTitle;
    UIImage *_largeContentImage;
    struct UIEdgeInsets _largeContentImageInsets;
}

@property (nonatomic) _Bool didSetShowsLargeContentViewer;
@property (nonatomic) _Bool showsLargeContentViewer;
@property (nonatomic) _Bool didSetLargeContentTitle;
@property (copy, nonatomic) NSString *largeContentTitle;
@property (nonatomic) _Bool didSetLargeContentImage;
@property (retain, nonatomic) UIImage *largeContentImage;
@property (nonatomic) _Bool didSetScalesLargeContentImage;
@property (nonatomic) _Bool scalesLargeContentImage;
@property (nonatomic) _Bool didSetLargeContentImageInsets;
@property (nonatomic) struct UIEdgeInsets largeContentImageInsets;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
