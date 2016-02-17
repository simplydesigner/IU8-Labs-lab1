//
//  VectorTests.m
//  VectorTests
//
//  Created by simplydesigner on 2/17/16.
//  Copyright © 2016 simplydesigner. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "Vector.hpp"

@interface VectorTests : XCTestCase

@end

@implementation VectorTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    Vector v(12);
    XCTAssertEqual(v.size(), 12);
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
