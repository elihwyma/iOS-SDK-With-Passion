/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, _CDDataCollectionAnonymizer, _CDFileUtility;

@interface _CDEventHandlerForAppInFocus : NSObject

{
    _CDDataCollectionAnonymizer *_anonymizer;
    _CDFileUtility *_utility;
}

@property (retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer;
@property (retain, nonatomic) _CDFileUtility *utility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)eventHandler:(id)arg1 withFileHandle:(id)arg2;

@end
