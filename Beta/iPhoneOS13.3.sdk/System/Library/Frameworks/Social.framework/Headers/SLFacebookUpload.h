/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSString;

@interface SLFacebookUpload : NSObject <Swift>

{
    NSString *_uploadID;
    long long _uploadType;
    unsigned long long _totalBytes;
    unsigned long long _transferredBytes;
}

@property (retain, nonatomic) NSString *uploadID;
@property (nonatomic) long long uploadType;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long transferredBytes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
