//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAttachmentItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKLocationAttachmentItem : CKAttachmentItem
{
    NSString *_locationTitle;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)UTITypes;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
// - (void).cxx_destruct;
- (BOOL)isDroppedPin;
- (id)vCardURLProperties;
- (id)_generateThumbnailFillToSize:(CGSize)arg1;
- (void)generatePreviewWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;

@end

