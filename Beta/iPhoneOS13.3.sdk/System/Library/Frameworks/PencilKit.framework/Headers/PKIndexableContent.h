/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSessionIndexableContent, NSString;

@interface PKIndexableContent : NSObject

{
    CHRecognitionSessionIndexableContent *_chIndexableContent;
}

@property (retain) CHRecognitionSessionIndexableContent *chIndexableContent;
@property (nonatomic, readonly) NSString *indexableTextRepresentation;
@property (nonatomic, readonly) NSString *presentableTextRepresentation;

- (id)initWithIndexableContent:(id)arg1;

@end
