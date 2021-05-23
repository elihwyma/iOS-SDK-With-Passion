/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKConversationListCellLayout : NSObject

{
    _Bool _invalid;
    _Bool _shouldShowChevron;
    double _summaryLabelCapFrameYOrigin;
    double _trailingLayoutMarginSize;
    struct CGRect _tableBounds;
    struct CGRect _summaryFrame;
    struct CGRect _dateFrame;
    struct CGRect _senderFrame;
    struct CGRect _chevronFrame;
    struct CGRect _unreadFrame;
}

@property (nonatomic) _Bool invalid;
@property (nonatomic) _Bool shouldShowChevron;
@property (nonatomic) struct CGRect tableBounds;
@property (nonatomic) struct CGRect summaryFrame;
@property (nonatomic) struct CGRect dateFrame;
@property (nonatomic) struct CGRect senderFrame;
@property (nonatomic) struct CGRect chevronFrame;
@property (nonatomic) struct CGRect unreadFrame;
@property (nonatomic) double summaryLabelCapFrameYOrigin;
@property (nonatomic) double trailingLayoutMarginSize;

+ (id)sharedInstance;

- (id)init;
- (void)invalidate;

@end
