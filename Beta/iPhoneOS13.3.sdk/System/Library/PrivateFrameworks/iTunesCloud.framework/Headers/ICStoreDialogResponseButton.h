/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreDialogResponseButtonAction, NSString;

@interface ICStoreDialogResponseButton : NSObject <Swift>

{
    _Bool _isDefaultButton;
    long long _type;
    NSString *_title;
    ICStoreDialogResponseButtonAction *_action;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool isDefaultButton;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) ICStoreDialogResponseButtonAction *action;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 isDefaultButton:(_Bool)arg2 title:(id)arg3 action:(id)arg4;

@end
