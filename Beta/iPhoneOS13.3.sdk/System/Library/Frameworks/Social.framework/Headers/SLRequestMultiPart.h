/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SLRequestMultiPart : NSObject

{
    NSData *_payload;
    NSString *_name;
    NSString *_type;
    NSString *_uniqueIdentifier;
    NSString *_multiPartBoundary;
    NSString *_filename;
}

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *multiPartBoundary;

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4;

- (unsigned long long)length;
- (id)partData;
- (id)payloadPreamble;
- (id)payloadEpilogue;
- (id)multiPartHeader;

@end
