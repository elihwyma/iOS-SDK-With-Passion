/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNObservable, CNUILikenessRenderingScope, NSArray;

@protocol CNCancelable;

@interface CNUIRenderedLikenessCacheEntry : NSObject

{
    id <CNCancelable> _token;
    CNObservable *_imageObservable;
    NSArray *_contacts;
    CNUILikenessRenderingScope *_scope;
}

@property (nonatomic, readonly) id <CNCancelable> token;
@property (nonatomic, readonly) CNObservable *imageObservable;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CNUILikenessRenderingScope *scope;

+ (id)entryWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;

- (id)description;
- (id)initWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;

@end
