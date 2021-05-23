/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIBarButtonItem.h>

@class NSString, NSUUID;

@protocol CPSButtonDelegate;

@interface CPSBarButtonItem : UIBarButtonItem

{
    NSUUID *_identifier;
    id <CPSButtonDelegate> _delegate;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (weak, nonatomic) id <CPSButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (id)initWithCPBarButton:(id)arg1;
- (id)_initWithCPBarButton:(id)arg1 showBackIndicator:(_Bool)arg2;

@end
