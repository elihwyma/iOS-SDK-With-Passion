/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITextDropProposal, UITextPosition, UITextRange;

@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UITextDropRequest : NSObject <Swift>

{
    _Bool _sameView;
    id <UIDropSession> _dropSession;
    UITextPosition *_dropPosition;
    UITextRange *_dropRange;
    UITextDropProposal *_suggestedProposal;
}

@property (retain, nonatomic) UITextDropProposal *suggestedProposal;
@property (nonatomic, getter=isSameView) _Bool sameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITextPosition *dropPosition;
@property (nonatomic, readonly) id <UIDropSession> dropSession;
@property (nonatomic, readonly) UITextRange *dropRange;

- (id)initWithPosition:(id)arg1 range:(id)arg2 inSession:(id)arg3;

@end
