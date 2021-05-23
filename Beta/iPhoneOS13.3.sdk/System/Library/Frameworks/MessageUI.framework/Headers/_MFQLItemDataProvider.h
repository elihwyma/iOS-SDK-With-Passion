/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, QLItem;

@interface _MFQLItemDataProvider : NSObject

{
    NSData *_data;
    QLItem *_item;
}

@property (nonatomic, readonly) QLItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)provideDataForItem:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;

@end
