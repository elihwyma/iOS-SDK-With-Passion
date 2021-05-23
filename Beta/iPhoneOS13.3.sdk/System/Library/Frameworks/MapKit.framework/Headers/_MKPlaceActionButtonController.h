/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _MKPlaceActionButtonControllerProtocol;

@interface _MKPlaceActionButtonController : NSObject

{
    int _analyticsAction;
    NSString *_buttonTitle;
    NSString *_buttonSubTitle;
    CDUnknownBlockType _buttonSelectedBlock;
    id <_MKPlaceActionButtonControllerProtocol> _delegate;
}

@property (weak, nonatomic) id <_MKPlaceActionButtonControllerProtocol> delegate;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) NSString *buttonSubTitle;
@property (nonatomic, readonly) CDUnknownBlockType buttonSelectedBlock;
@property (nonatomic, readonly) int analyticsAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;

- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(CDUnknownBlockType)arg3;
- (void)buttonTextChanged;

@end
