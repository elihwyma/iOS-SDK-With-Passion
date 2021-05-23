/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol IKJSDataObserving;

__attribute__((visibility("hidden")))
@interface _IKJSDataObserverRecord : NSObject

{
    struct {
        _Bool hasDidChangePropertyPath;
    } _observerFlags;
    id <IKJSDataObserving> _observer;
    NSString *_observerHash;
    NSString *_pathString;
}

@property (weak, nonatomic, readonly) id <IKJSDataObserving> observer;
@property (nonatomic, readonly) NSString *observerHash;
@property (nonatomic, readonly) NSString *pathString;

+ (id)hashForObserver:(id)arg1;

- (id)initWithObserver:(id)arg1 pathString:(id)arg2;
- (_Bool)isAffectedByPropertyPathWithString:(id)arg1 subpathString:(id *)arg2;

@end
