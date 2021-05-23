/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSImage, QLThumbnailMetadata, UIImage;

@interface QLThumbnailRepresentation : NSObject

{
    int _flavor;
    long long _type;
    NSImage *_NSImage;
    UIImage *_UIImageThumbnail;
    struct CGImage *_CGImageThumbnail;
    double _scale;
    QLThumbnailMetadata *_generatedProperties;
    struct CGRect _contentRect;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *UIImageThumbnail;
@property (nonatomic) struct CGImage *CGImageThumbnail;
@property (nonatomic) double scale;
@property int flavor;
@property struct CGRect contentRect;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, readonly) NSImage *NSImage;

- (void)dealloc;
- (id)description;
- (id)initWithThumbnailType:(long long)arg1 iconFlavor:(int)arg2 CGImage:(struct CGImage *)arg3 scale:(double)arg4 contentRect:(struct CGRect)arg5 generatedProperties:(id)arg6;

@end
