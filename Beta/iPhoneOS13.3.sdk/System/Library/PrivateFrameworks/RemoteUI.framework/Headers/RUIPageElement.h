/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, RUIPage;

@interface RUIPageElement

{
    RUIPage *_page;
}

@property (weak, nonatomic) RUIPage *page;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isLoading) _Bool loading;

- (id)staticValues;

@end
