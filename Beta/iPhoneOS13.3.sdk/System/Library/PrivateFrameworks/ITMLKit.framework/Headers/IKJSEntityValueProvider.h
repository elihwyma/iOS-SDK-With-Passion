/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@protocol IKEntityValueProviding;

@interface IKJSEntityValueProvider : IKJSObject

{
    id <IKEntityValueProviding> _entityValueProvider;
}

@property (retain, nonatomic) id <IKEntityValueProviding> entityValueProvider;

- (id)_valueForEntityProperty:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
