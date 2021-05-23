/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface UIContextMenuConfiguration : NSObject

{
    id <NSCopying> _identifier;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _actionProvider;
}

@property (copy, nonatomic) id <NSCopying> identifier;
@property (copy, nonatomic) CDUnknownBlockType previewProvider;
@property (copy, nonatomic) CDUnknownBlockType actionProvider;

+ (id)configurationWithIdentifier:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 actionProvider:(CDUnknownBlockType)arg3;

@end
