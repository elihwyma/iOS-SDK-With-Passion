/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface CNContactImage : NSObject

{
    NSString *_identifier;
    NSData *_imageData;
    NSDate *_lastUsedDate;
    long long _source;
    NSString *_sourceIdentifier;
    NSString *_variant;
    struct CGRect _cropRect;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *variant;

- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(struct CGRect)arg3 lastUsedDate:(id)arg4;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect)arg2 lastUsedDate:(id)arg3;
- (id)copyWithNewImageData:(id)arg1;

@end
