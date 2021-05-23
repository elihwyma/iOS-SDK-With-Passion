/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@protocol NSCoding, NSObject><NSCoding;

@interface MSObjectWrapper : NSObject

{
    long long _size;
    long long _uniqueID;
    id <NSObject><NSCoding> _object;
    int _errorCount;
}

@property (nonatomic) long long size;
@property (nonatomic) long long uniqueID;
@property (nonatomic, readonly) id <NSCoding> object;
@property (nonatomic) int errorCount;

+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;
+ (long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1;
+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;

- (id)initWithObject:(id)arg1 size:(long long)arg2;

@end
