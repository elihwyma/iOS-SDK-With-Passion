/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface ENResource : NSObject

{
    NSData *_data;
    NSString *_mimeType;
    NSString *_filename;
    NSString *_sourceUrl;
    NSData *_dataHash;
    NSDictionary *_edamAttributes;
    NSString *_guid;
}

@property (copy, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSData *dataHash;
@property (retain, nonatomic) NSDictionary *edamAttributes;
@property (copy, nonatomic) NSString *guid;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *filename;
@property (nonatomic, readonly) NSString *mediaTag;

+ (id)resourceWithServiceResource:(id)arg1;

- (id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)EDAMResource;

@end
