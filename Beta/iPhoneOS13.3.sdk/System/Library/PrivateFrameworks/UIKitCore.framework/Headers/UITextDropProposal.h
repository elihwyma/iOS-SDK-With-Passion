/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDropProposal.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UITextDropProposal : UIDropProposal <Swift>

{
    _Bool _useFastSameViewOperations;
    unsigned long long _dropAction;
    unsigned long long _dropProgressMode;
    unsigned long long _dropPerformer;
}

@property (nonatomic) unsigned long long dropAction;
@property (nonatomic) unsigned long long dropProgressMode;
@property (nonatomic) _Bool useFastSameViewOperations;
@property (nonatomic) unsigned long long dropPerformer;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1;

@end
