/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject

{
    _Bool mConvertHyperlinks;
    _Bool mConvertAttachments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConvertHyperlinks:(_Bool)arg1 convertGraphicalAttachments:(_Bool)arg2;
- (id)attachmentStringForDrawableAttachment:(id)arg1;
- (id)urlForHyperlinkField:(id)arg1;

@end
