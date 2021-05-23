/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject

{
    NSString *_inContent;
    NSString *_outContent;
    NSDictionary *_attributesToMerge;
    NSError *_error;
    NSArray *_attributesToPreserve;
}

@property (retain, readonly) NSString *_inContent;
@property (retain, nonatomic, readonly) NSArray *attributesToPreserve;
@property (retain, nonatomic, readonly) NSDictionary *attributesToMerge;
@property (retain, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSString *outContent;

- (void)dealloc;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;

@end
