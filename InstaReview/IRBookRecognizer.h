//
//  IRBookRecognizer.h
//  InstaReview
//
//  Created by Max Medvedev on 3/3/14.
//  Copyright (c) 2014 Max Medvedev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IRBookRecognizer : NSObject <NSURLConnectionDataDelegate>

- (NSString*)getBookNameForUploadedImage:(NSString *)url;

@end
