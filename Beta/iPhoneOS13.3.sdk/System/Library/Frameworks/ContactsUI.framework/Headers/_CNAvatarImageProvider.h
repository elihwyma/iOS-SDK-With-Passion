/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNUIPRLikenessProvider;

__attribute__((visibility("hidden")))
@interface _CNAvatarImageProvider : NSObject

{
    id <CNUIPRLikenessProvider> _likenessProvider;
}

@property (nonatomic, readonly) id <CNUIPRLikenessProvider> likenessProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)roundImage:(id)arg1;

- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3;
- (id)initWithLikenessProvider:(id)arg1;

@end
