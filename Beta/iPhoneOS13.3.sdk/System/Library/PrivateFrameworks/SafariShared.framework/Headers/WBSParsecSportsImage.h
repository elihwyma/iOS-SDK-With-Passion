/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSString, WBSParsecImageRepresentation;

@interface WBSParsecSportsImage : WBSParsecModel

{
    long long _alignment;
    WBSParsecImageRepresentation *_imageRepresentation;
    NSString *_label;
    NSString *_name;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)schema;

- (id)initWithDictionary:(id)arg1;

@end
