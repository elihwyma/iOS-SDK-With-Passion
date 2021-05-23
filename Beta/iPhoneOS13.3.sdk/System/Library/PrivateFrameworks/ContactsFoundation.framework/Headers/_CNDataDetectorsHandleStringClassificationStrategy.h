/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNDataDetectorsHandleStringClassificationStrategy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dataDetectorsStrategy;
+ (id)assistedDataDetectorsStrategy;

- (unsigned long long)classificationOfHandleString:(id)arg1;

@end
