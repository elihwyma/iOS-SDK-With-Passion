/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class BCSQRCodeParser, NSMapTable;

@protocol BCSAction;

@interface _SFQRCodeDetectionController : NSObject

{
    BCSQRCodeParser *_QRCodeParser;
    id <BCSAction> _lastDetectedAction;
    NSMapTable *_cachedElements;
}

+ (id)sharedController;

- (id)init;
- (id)elementForAction:(id)arg1;
- (_Bool)_actionPickerItemSupportCopyAction:(id)arg1;
- (id)actionForElement:(id)arg1;
- (void)getActionForImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getActionForImageSynchronously:(id)arg1 userInfo:(id *)arg2;
- (id)additionalWKElementActionFromElement:(id)arg1 defaultActions:(id)arg2;
- (id)actionPickerItemsForAction:(id)arg1;
- (void)clearCachedElement:(id)arg1;
- (void)preparePickerItemsForActionIfNeeded:(id)arg1 element:(id)arg2 defaultAcitons:(id)arg3;
- (id)adjustedCopyActionForAction:(id)arg1 element:(id)arg2;

@end
