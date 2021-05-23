/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXFirstViewportComponentInsertionCondition : NSObject

{
    _Bool _allowFirstViewportException;
}

@property (nonatomic) _Bool allowFirstViewportException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (id)initWithAllowFirstViewportException:(_Bool)arg1;

@end
