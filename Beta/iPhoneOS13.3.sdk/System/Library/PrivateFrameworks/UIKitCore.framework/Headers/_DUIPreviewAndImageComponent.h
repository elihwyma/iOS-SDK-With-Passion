/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _DUIImageComponent, _DUIPreview;

@interface _DUIPreviewAndImageComponent : NSObject <Swift>

{
    _DUIPreview *_preview;
    _DUIImageComponent *_imageComponent;
    unsigned long long _index;
}

@property (retain, nonatomic) _DUIPreview *preview;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (nonatomic) unsigned long long index;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
