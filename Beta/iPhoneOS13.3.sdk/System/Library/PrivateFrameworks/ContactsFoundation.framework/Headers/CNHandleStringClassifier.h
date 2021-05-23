/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject

{
    id <_CNHandleStringClassificationStrategy> _classificationStrategy;
}

@property (nonatomic, readonly) id <_CNHandleStringClassificationStrategy> classificationStrategy;

- (id)init;
- (id)description;
- (id)initWithClassificationQuality:(unsigned long long)arg1;
- (void)classifyHandleString:(id)arg1 builder:(id)arg2;
- (id)initWithClassificationStrategy:(id)arg1;
- (unsigned long long)typeOfHandleString:(id)arg1;

@end
