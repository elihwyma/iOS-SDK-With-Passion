/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSDictionary, NSNumber, NSString, QLItem, UIColor;

@protocol QLItemThumbnailGeneratorProtocolInternal;

@interface QLPreviewContext : NSObject

{
    _Bool _canBeEdited;
    _Bool _canBeShared;
    id <QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
    NSString *_previewTitle;
    NSString *_contentType;
    unsigned long long _editedFileBehavior;
    NSString *_password;
    unsigned long long _previewItemType;
    UIColor *_backgroundColor;
    NSNumber *_itemSize;
    long long _processIdentifier;
    QLItem *_item;
    NSDictionary *_clientPreviewOptions;
}

@property (retain) id <QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator;
@property (retain) NSString *previewTitle;
@property (retain) NSString *contentType;
@property _Bool canBeEdited;
@property _Bool canBeShared;
@property unsigned long long editedFileBehavior;
@property unsigned long long previewItemType;
@property (retain) UIColor *backgroundColor;
@property (retain) NSNumber *itemSize;
@property long long processIdentifier;
@property (retain) QLItem *item;
@property (retain) NSDictionary *clientPreviewOptions;
@property (copy) NSString *password;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
