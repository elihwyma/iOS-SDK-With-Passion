/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/TMLJSONObject.h>

@class NSString;

@interface TMLJSONObjectDerived : TMLJSONObject

{
    TMLJSONObject *_parent;
    NSString *_keyPath;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)rawJSON;
- (void)setRawJSON:(id)arg1;
- (id)initWithParent:(id)arg1 keyPath:(id)arg2;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2;

@end
