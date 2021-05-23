/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMData, EDAMResourceAttributes, NSNumber, NSString;

@interface EDAMResource : FATObject

{
    NSString *_guid;
    NSString *_noteGuid;
    EDAMData *_data;
    NSString *_mime;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSNumber *_active;
    EDAMData *_recognition;
    EDAMResourceAttributes *_attributes;
    NSNumber *_updateSequenceNum;
    EDAMData *_alternateData;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) EDAMData *data;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) EDAMData *recognition;
@property (retain, nonatomic) EDAMResourceAttributes *attributes;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) EDAMData *alternateData;

+ (id)structName;
+ (id)structFields;

@end
