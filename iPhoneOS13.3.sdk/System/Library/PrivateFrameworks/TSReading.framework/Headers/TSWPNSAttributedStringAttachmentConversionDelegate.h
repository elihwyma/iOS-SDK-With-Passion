//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPNSAttributedStringAttachmentConversionDelegate-Protocol.h>

@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate>
{
    BOOL mConvertHyperlinks;
    BOOL mConvertAttachments;
}

- (id)urlForHyperlinkField:(id)arg1;
- (id)attachmentStringForDrawableAttachment:(id)arg1;
- (id)init;
- (id)initWithConvertHyperlinks:(BOOL)arg1 convertGraphicalAttachments:(BOOL)arg2;

@end

