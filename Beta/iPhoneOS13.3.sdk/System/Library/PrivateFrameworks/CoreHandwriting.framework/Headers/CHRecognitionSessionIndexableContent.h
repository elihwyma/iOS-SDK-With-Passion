/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject

{
    NSString *_indexableTextRepresentation;
    NSString *_presentableTextRepresentation;
}

@property (copy, nonatomic, readonly) NSString *indexableTextRepresentation;
@property (copy, nonatomic, readonly) NSString *presentableTextRepresentation;

- (void)dealloc;
- (id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2;

@end
