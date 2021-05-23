/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _CNHandleStringClassificationStrategy;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject

{
    id <_CNHandleStringClassificationStrategy> _strategy;
    id <_CNHandleStringClassificationStrategy> _assistingStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithStrategy:(id)arg1;
- (unsigned long long)classificationOfHandleString:(id)arg1;
- (void)makeAssistingStrategyIfNecessary;

@end
