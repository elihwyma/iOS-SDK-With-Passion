/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class ManagedEventHandler, NSString;

__attribute__((visibility("hidden")))
@interface MinimalSyndromeHandler : NSObject

{
    NSString *_syndromeName;
    char *_syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)getHandlerByName:(id)arg1;

- (void)didReceiveSyndrome:(id)arg1;

@end
